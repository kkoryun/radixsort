#pragma once
#include "queue.h"
#include <string>
using namespace std;
namespace radixsort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			q = new queue[10];
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: queue *q;
	private: int * arr;
	private: void  StringToNummas(string s, int & k, int * nummus)
	{
		s += ' ';
		int l = 0;
		k = 0;
		while (s.length() > 0)
		{

			l = s.find(" ");
			if (l > 0)
			{
				nummus[k++] = stoi(s.substr(0, l));
			}
			s.erase(0, l + 1);
		}
	};
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridView^  dataGridView6;
	private: System::Windows::Forms::DataGridView^  dataGridView7;
	private: System::Windows::Forms::DataGridView^  dataGridView8;
	private: System::Windows::Forms::DataGridView^  dataGridView9;
	private: System::Windows::Forms::DataGridView^  dataGridView10;
	private: System::Windows::Forms::Button^  button1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ENTER ARRAY";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(10, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(100, 229);
			this->dataGridView1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1001, 20);
			this->textBox1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(111, 99);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(100, 229);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(212, 99);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(100, 229);
			this->dataGridView3->TabIndex = 4;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Location = System::Drawing::Point(313, 99);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->Size = System::Drawing::Size(100, 229);
			this->dataGridView4->TabIndex = 5;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->ColumnHeadersVisible = false;
			this->dataGridView5->Location = System::Drawing::Point(414, 99);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->Size = System::Drawing::Size(100, 229);
			this->dataGridView5->TabIndex = 6;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->ColumnHeadersVisible = false;
			this->dataGridView6->Location = System::Drawing::Point(515, 99);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->Size = System::Drawing::Size(100, 229);
			this->dataGridView6->TabIndex = 7;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->ColumnHeadersVisible = false;
			this->dataGridView7->Location = System::Drawing::Point(616, 99);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersVisible = false;
			this->dataGridView7->Size = System::Drawing::Size(100, 229);
			this->dataGridView7->TabIndex = 8;
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->ColumnHeadersVisible = false;
			this->dataGridView8->Location = System::Drawing::Point(717, 99);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersVisible = false;
			this->dataGridView8->Size = System::Drawing::Size(100, 229);
			this->dataGridView8->TabIndex = 9;
			// 
			// dataGridView9
			// 
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->ColumnHeadersVisible = false;
			this->dataGridView9->Location = System::Drawing::Point(818, 99);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->RowHeadersVisible = false;
			this->dataGridView9->Size = System::Drawing::Size(100, 229);
			this->dataGridView9->TabIndex = 10;
			// 
			// dataGridView10
			// 
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->ColumnHeadersVisible = false;
			this->dataGridView10->Location = System::Drawing::Point(919, 99);
			this->dataGridView10->Name = L"dataGridView10";
			this->dataGridView10->RowHeadersVisible = false;
			this->dataGridView10->Size = System::Drawing::Size(100, 229);
			this->dataGridView10->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"SORT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1021, 340);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView10);
			this->Controls->Add(this->dataGridView9);
			this->Controls->Add(this->dataGridView8);
			this->Controls->Add(this->dataGridView7);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		string s;
		String^ S;
		S=textBox1->Text;
		int i = 0, j = 0;
		int d = S->Length;
		while (d--) {
				s[j] += S[i];
				i++;
		}

		int size=0;
		d = s.length();
		arr = new int[d];
		StringToNummas(s, size, arr);
		dataGridView1->ColumnCount = 1;
		dataGridView2->ColumnCount = 1;
		dataGridView3->ColumnCount = 1;
		dataGridView4->ColumnCount = 1;
		dataGridView5->ColumnCount = 1;
		dataGridView6->ColumnCount = 1;
		dataGridView7->ColumnCount = 1;
		dataGridView8->ColumnCount = 1;
		dataGridView9->ColumnCount = 1;
		dataGridView10->ColumnCount = 1;

		//find max elem in array
		int max = arr[0];
		for (size_t i = 0; i < size; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		//find  number of radix in max
		int k = 0;
		while (max != 0)
		{
			k++;
			max /= 10;
		}

		//sort algoritm
		int t = 0;
		int y = 0;
		for (size_t i = 0; i < k; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				t = arr[j] / pow(10, i);
				y = t % 10;
				q[y].Push(arr[j]);
			}
			size = 0;
			for (size_t l = 0; l < 10; l++)
			{
				while (!q[l].Isempty())
					arr[size++] = q[l].Pop();
			}
		}

	}
};
}
